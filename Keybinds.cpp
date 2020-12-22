#include "framework.h"

std::vector<std::tuple<std::vector<int>, bool, std::function<void(void)>>> Keybinds::keybinds = {};
std::vector<int> Keybinds::downkeys = {};

bool Keybinds::HandleKeypress(int key)
{
	if (std::find(downkeys.begin(), downkeys.end(), key) == downkeys.end())
	{
		downkeys.push_back(key);
		return true;
	}
	return false;
}

void Keybinds::HandleKeyreleases()
{
	std::vector<int>::iterator it;
	it = std::remove_if(downkeys.begin(), downkeys.end(), IsKeyUp);
	downkeys.erase(it, downkeys.end());
}

bool Keybinds::IsKeyDown(int key)
{
	return GetAsyncKeyState(key) << (sizeof(SHORT) * 8 - 1);
}

bool Keybinds::AreKeysDown(std::vector<int> keys)
{
	for (auto key : keys)
	{
		if (!IsKeyDown(key))
		{
			return false;
		}
	}

	return true;
}

bool Keybinds::IsKeyUp(int key)
{
	return !IsKeyDown(key);
}

void Keybinds::Set(std::vector<int> keys, bool repeat, std::function<void(void)> func)
{
	keybinds.push_back(std::make_tuple(keys, repeat, func));
}

void Keybinds::Set(int key, bool repeat, std::function<void(void)> func)
{
	keybinds.push_back(std::make_tuple(std::vector<int>{ key }, repeat, func));
}

void Keybinds::Set(int key, int key2, bool repeat, std::function<void(void)> func)
{
	keybinds.push_back(std::make_tuple(std::vector<int>{ key, key2 }, repeat, func));
}

void Keybinds::Set(int key, int key2, int key3, bool repeat, std::function<void(void)> func)
{
	keybinds.push_back(std::make_tuple(std::vector<int>{ key, key2, key3 }, repeat, func));
}

void Keybinds::Tick()
{
	for (auto bind : keybinds)
	{
		if (AreKeysDown(std::get<0>(bind)))
		{
			if (HandleKeypress(std::get<0>(bind)[0]) || std::get<1>(bind))
			{
				std::get<2>(bind)();
			}
		}
	}
	HandleKeyreleases();
}
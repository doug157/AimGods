#pragma once

class Keybinds
{
private:
	static std::vector<std::tuple<std::vector<int>, bool, std::function<void(void)>>> keybinds;
	static std::vector<int> downkeys;

	static bool HandleKeypress(int key);
	static void HandleKeyreleases();

public:
	static bool IsKeyDown(int key);
	static bool AreKeysDown(std::vector<int> keys);
	static bool IsKeyUp(int key);
	static void Set(std::vector<int> keys, bool repeat, std::function<void(void)> func);
	static void Set(int key, bool repeat, std::function<void(void)> func);
	static void Set(int key, int key2, bool repeat, std::function<void(void)> func);
	static void Set(int key, int key2, int key3, bool repeat, std::function<void(void)> func);
	static void Tick();
};
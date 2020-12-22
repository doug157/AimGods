#include "framework.h"

namespace funcs
{
    std::mutex m;
    std::vector<std::pair<std::string, std::chrono::high_resolution_clock::time_point>> Events{};

    void LogEvent(std::string Name, bool PrintToConsole, bool SaveToLog)
    {
        if (!SaveToLog && !PrintToConsole) return;

        m.lock();
        static FILE* fp;
        if (!fp) {
            std::wstring logpath = L"C:/temp/log_aimgods.txt";
            _wfopen_s(&fp, logpath.c_str(), L"a");
        }

        auto it = std::find_if(Events.begin(), Events.end(),
            [&Name](const std::pair<std::string, std::chrono::high_resolution_clock::time_point>& element) {
            return element.first.compare(Name.c_str()) == 0;
        });

        if (it == Events.end())
        {
            Events.push_back(std::make_pair(Name.c_str(), std::chrono::high_resolution_clock::now()));
            if (SaveToLog && fp) fprintf(fp, "%s\n", Name.c_str());
            if (PrintToConsole) printf("%s\n", Name.c_str());
        }

        auto _it = std::remove_if(Events.begin(), Events.end(),
            [](const std::pair<std::string, std::chrono::high_resolution_clock::time_point>& element) {
            return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - element.second).count() > 1000;
        });

        Events.erase(_it, Events.end());
        m.unlock();
    }

    uintptr_t FindPattern(uintptr_t start, size_t length, const unsigned char* pattern, const char* mask)
    {
        size_t pos = 0;
        auto maskLength = std::strlen(mask) - 1;
        auto startAdress = start;
        for (auto it = startAdress; it < startAdress + length; ++it)
        {
            if (*reinterpret_cast<unsigned char*>(it) == pattern[pos] || mask[pos] == '?')
            {
                if (mask[pos + 1] == '\0')
                {
                    return it - maskLength;
                }
                pos++;
            }
            else
            {
                pos = 0;
            }
        }
        return -1;
    }

    uintptr_t FindPattern(HMODULE module, const unsigned char* pattern, const char* mask)
    {
        MODULEINFO info = { };
        GetModuleInformation(GetCurrentProcess(), module, &info, sizeof(MODULEINFO));
        return FindPattern(reinterpret_cast<uintptr_t>(module), info.SizeOfImage, pattern, mask);
    }

    std::string utf8_encode(const std::wstring& wstr)
    {
        //return std::string(wstr.begin(), wstr.end());
        if (wstr.empty()) return std::string();
        int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
        std::string strTo(size_needed, 0);
        WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
        return strTo;
    }

    std::wstring utf8_decode(const std::string& str)
    {
        //return std::wstring(str.begin(), str.end());
        if (str.empty()) return std::wstring();
        int size_needed = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
        std::wstring wstrTo(size_needed, 0);
        MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
        return wstrTo;
    }

    std::wstring random_wstring(std::size_t length, const std::wstring characters)
    {
        std::random_device random_device;
        std::mt19937 generator(random_device());
        std::uniform_int_distribution<> distribution(0, characters.size() - 1);
        std::wstring random_string;
        for (std::size_t i = 0; i < length; ++i)
        {
            random_string += characters[distribution(generator)];
        }
        return random_string;
    }

    std::wstring random_name()
    {
        std::vector<std::wstring> names{
            L"accountbaffled", L"strikeprevious", L"afearedprevent", L"dankishfumping",
            L"anchorbave", L"haullindow", L"tiffeyneedy", L"carkyninger",
            L"aptexposure", L"godportrait", L"suffixshout", L"fightsavanna",
            L"asterncrambazzled", L"dumbledorecrowded", L"commissionnonstop", L"initiativewithout",
            L"chonethroughout", L"mechanismjulius", L"educatorforester", L"mediumtrolleybus",
            L"creevyfragile", L"meamythorough", L"shovelthirsty", L"consumermough",
            L"culfbesides", L"cleatsdreet", L"dryflousers", L"extentparty",
            L"cuttledibabs", L"bunsbysparkle", L"indeliblewake", L"jupeshipwreck",
            L"cyrussuburban", L"fezziwigsplat", L"pumpionginger", L"carpallasting",
            L"dadsonparamedic", L"chidecourageous", L"subsequentprada", L"squeakprimarily",
            L"danoneemigrate", L"chilliteammate", L"statusbrownlow", L"icerinkgallery",
            L"findtacky", L"falterhow", L"petquagga", L"mobbsmolt",
            L"frashprecious", L"highjumpsolar", L"quiltoverlook", L"discuitscanine",
            L"gillyweedimpala", L"limpkinsalveoli", L"slightlyuniform", L"collarbonethumb",
            L"grainyinternal", L"crucklesquelch", L"spibsunhealthy", L"soccersningers",
            L"grettleassistant", L"scorpionconstant", L"exultantsneering", L"dispatchermuppet",
            L"grimblecut", L"mewthirsty", L"nerdwipped", L"scutfibble",
            L"hartattached", L"grodengorjio", L"bloodwhinese", L"pearlflordon",
            L"kilipermission", L"bathildasyrupy", L"saulttectacles", L"pretzelsstable",
            L"laterblimp", L"navelgloin", L"paltedacid", L"surlyarise",
            L"mongoosedivergent", L"wititterleyeffect", L"guidanceaddiction", L"eliminateakershem",
            L"oinkvigilant", L"froldcalling", L"dartillfated", L"bakeritalian",
            L"opengas", L"gazeyoke", L"watemegs", L"lovepalm",
            L"peacefulpetowker", L"africantriwizard", L"jackanapesscumbag", L"minecraftbocolate",
            L"possiblecordage", L"bellingtonquean", L"conkeyshadowfax", L"impatientelrond",
            L"respectfulchocolaty", L"managementnaturally", L"chestplateopposition",
            L"ribsseafowl", L"backstrider", L"stairsbloat", L"slabhandbag",
            L"satisfysmuff", L"flatpatronum", L"draggletruth", L"speechgoogle",
            L"situationshoemaker", L"snevelliccimoorhen", L"helicopterrokesmith",
            L"slassbowling", L"gateauzoglin", L"dogfishtheir", L"berriescrook",
            L"surmisecoffle", L"backbonevicar", L"accioskettles", L"smolyconvince",
            L"tathamdiligence", L"buriedclamorous", L"endurablebroken", L"cheelringwraith",
            L"testiclesnoddy", L"trainingsocial", L"forsestighland", L"lumberingyoisy",
            L"tykebeggar", L"barleyknot", L"perkerrare", L"macawovers",
            L"ultimateextra", L"lickererkling", L"studiomustard", L"shrillmumpled",
            L"whichstatement", L"loutdiscerning", L"kerfufflelever", L"districtplague",
            L"wingardiumhunting", L"crumpbackedloving", L"dumbassmeadowlark", L"skillfuljefferson",
            L"woodtoad", L"heardera", L"blinkward", L"doomyteen"
        };

        std::random_device random_device;
        std::mt19937 generator(random_device());
        std::uniform_int_distribution<> distribution(0, names.size() - 1);
        return names[distribution(generator)];
    }
}
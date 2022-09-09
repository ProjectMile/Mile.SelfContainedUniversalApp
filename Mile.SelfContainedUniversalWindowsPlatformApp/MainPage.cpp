#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

// #include "D:\Projects\MouriNaruto\NanaRun\ThirdParty\Detours\detours.h"
// #pragma comment(lib, "D:\\Projects\\MouriNaruto\\NanaRun\\Output\\Binaries\\Release\\x64\\Detours.lib")

// static LONG dwSlept = 0;

// // Target pointer for the uninstrumented Sleep API.
// //
// static VOID(WINAPI* TrueSleep)(DWORD dwMilliseconds) = Sleep;

// // Detour function that replaces the Sleep API.
// //
// VOID WINAPI TimedSleep(DWORD dwMilliseconds)
// {
//     // Save the before and after times around calling the Sleep API.
//     DWORD dwBeg = GetTickCount();
//     TrueSleep(dwMilliseconds);
//     DWORD dwEnd = GetTickCount();

//     InterlockedExchangeAdd(&dwSlept, dwEnd - dwBeg);
// }

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::MileSelfContainedUniversalWindowsPlatformApp::implementation
{
    MainPage::MainPage()
    {
        // DetourTransactionBegin();
        // DetourUpdateThread(GetCurrentThread());
        // DetourAttach(&(PVOID&)TrueSleep, TimedSleep);
        // DetourTransactionCommit();

        // ::Sleep(1000);

        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        //myButton().Content(box_value(L"Clicked"));
    }
}

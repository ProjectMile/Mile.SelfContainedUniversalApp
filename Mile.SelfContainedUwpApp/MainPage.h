#pragma once

#include "MainPage.g.h"

namespace winrt::MileSelfContainedUniversalWindowsPlatformApp::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage() = default;

        void InitializeComponent();
    };
}

namespace winrt::MileSelfContainedUniversalWindowsPlatformApp::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}

#pragma once

#include "MainPage.g.h"

namespace winrt::MileSelfContainedUniversalApp::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage() = default;

        void InitializeComponent();
    };
}

namespace winrt::MileSelfContainedUniversalApp::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}

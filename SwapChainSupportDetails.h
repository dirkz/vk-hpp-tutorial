#pragma once

#include "stdafx.h"

namespace zvk
{

struct SwapChainSupportDetails
{
    SwapChainSupportDetails(vk::PhysicalDevice device, vk::SurfaceKHR surface);

    bool IsAdequate();

  private:
    vk::SurfaceCapabilitiesKHR m_capabilities;
    std::vector<vk::SurfaceFormatKHR> m_formats;
    std::vector<vk::PresentModeKHR> m_presentModes;
};

} // namespace zvk

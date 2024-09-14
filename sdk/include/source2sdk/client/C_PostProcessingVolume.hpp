#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x820
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
    // static metadata: MNetworkVarNames "float m_flFadeDuration"
    // static metadata: MNetworkVarNames "float m_flMinLogExposure"
    // static metadata: MNetworkVarNames "float m_flMaxLogExposure"
    // static metadata: MNetworkVarNames "float m_flMinExposure"
    // static metadata: MNetworkVarNames "float m_flMaxExposure"
    // static metadata: MNetworkVarNames "float m_flExposureCompensation"
    // static metadata: MNetworkVarNames "float m_flExposureFadeSpeedUp"
    // static metadata: MNetworkVarNames "float m_flExposureFadeSpeedDown"
    // static metadata: MNetworkVarNames "float m_flTonemapEVSmoothingRange"
    // static metadata: MNetworkVarNames "bool m_bMaster"
    // static metadata: MNetworkVarNames "bool m_bExposureControl"
    #pragma pack(push, 1)
    class C_PostProcessingVolume : public client::C_BaseTrigger
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7e0[0x10]; // 0x7e0
        // metadata: MNetworkEnable
        // m_hPostSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings;
        char m_hPostSettings[0x8]; // 0x7f0        
        // metadata: MNetworkEnable
        float m_flFadeDuration; // 0x7f8        
        // metadata: MNetworkEnable
        float m_flMinLogExposure; // 0x7fc        
        // metadata: MNetworkEnable
        float m_flMaxLogExposure; // 0x800        
        // metadata: MNetworkEnable
        float m_flMinExposure; // 0x804        
        // metadata: MNetworkEnable
        float m_flMaxExposure; // 0x808        
        // metadata: MNetworkEnable
        float m_flExposureCompensation; // 0x80c        
        // metadata: MNetworkEnable
        float m_flExposureFadeSpeedUp; // 0x810        
        // metadata: MNetworkEnable
        float m_flExposureFadeSpeedDown; // 0x814        
        // metadata: MNetworkEnable
        float m_flTonemapEVSmoothingRange; // 0x818        
        // metadata: MNetworkEnable
        bool m_bMaster; // 0x81c        
        // metadata: MNetworkEnable
        bool m_bExposureControl; // 0x81d        
        [[maybe_unused]] std::uint8_t pad_0x81e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PostProcessingVolume because it is not a standard-layout class
    static_assert(sizeof(C_PostProcessingVolume) == 0x820);
};

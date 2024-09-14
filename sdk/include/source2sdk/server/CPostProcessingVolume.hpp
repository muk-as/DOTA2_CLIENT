#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x998
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
    class CPostProcessingVolume : public server::CBaseTrigger
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x958[0x10]; // 0x958
        // metadata: MNetworkEnable
        // m_hPostSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings;
        char m_hPostSettings[0x8]; // 0x968        
        // metadata: MNetworkEnable
        float m_flFadeDuration; // 0x970        
        // metadata: MNetworkEnable
        float m_flMinLogExposure; // 0x974        
        // metadata: MNetworkEnable
        float m_flMaxLogExposure; // 0x978        
        // metadata: MNetworkEnable
        float m_flMinExposure; // 0x97c        
        // metadata: MNetworkEnable
        float m_flMaxExposure; // 0x980        
        // metadata: MNetworkEnable
        float m_flExposureCompensation; // 0x984        
        // metadata: MNetworkEnable
        float m_flExposureFadeSpeedUp; // 0x988        
        // metadata: MNetworkEnable
        float m_flExposureFadeSpeedDown; // 0x98c        
        // metadata: MNetworkEnable
        float m_flTonemapEVSmoothingRange; // 0x990        
        // metadata: MNetworkEnable
        bool m_bMaster; // 0x994        
        // metadata: MNetworkEnable
        bool m_bExposureControl; // 0x995        
        [[maybe_unused]] std::uint8_t pad_0x996[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPostProcessingVolume because it is not a standard-layout class
    static_assert(sizeof(CPostProcessingVolume) == 0x998);
};

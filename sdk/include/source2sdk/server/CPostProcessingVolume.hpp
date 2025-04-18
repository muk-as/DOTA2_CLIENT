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
    // Size: 0x9c0
    // Has VTable
    // Construct allowed
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
        [[maybe_unused]] std::uint8_t pad_0x980[0x10]; // 0x980
        // metadata: MNetworkEnable
        // m_hPostSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings;
        char m_hPostSettings[0x8]; // 0x990        
        // metadata: MNetworkEnable
        float m_flFadeDuration; // 0x998        
        // metadata: MNetworkEnable
        float m_flMinLogExposure; // 0x99c        
        // metadata: MNetworkEnable
        float m_flMaxLogExposure; // 0x9a0        
        // metadata: MNetworkEnable
        float m_flMinExposure; // 0x9a4        
        // metadata: MNetworkEnable
        float m_flMaxExposure; // 0x9a8        
        // metadata: MNetworkEnable
        float m_flExposureCompensation; // 0x9ac        
        // metadata: MNetworkEnable
        float m_flExposureFadeSpeedUp; // 0x9b0        
        // metadata: MNetworkEnable
        float m_flExposureFadeSpeedDown; // 0x9b4        
        // metadata: MNetworkEnable
        float m_flTonemapEVSmoothingRange; // 0x9b8        
        // metadata: MNetworkEnable
        bool m_bMaster; // 0x9bc        
        // metadata: MNetworkEnable
        bool m_bExposureControl; // 0x9bd        
        [[maybe_unused]] std::uint8_t pad_0x9be[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPostProcessingVolume because it is not a standard-layout class
    static_assert(sizeof(CPostProcessingVolume) == 0x9c0);
};

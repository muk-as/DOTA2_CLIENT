#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_EnvWindShared.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x708
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CEnvWindShared m_EnvWindShared"
        // static metadata: MNetworkVarNames "float m_fDirectionVariation"
        // static metadata: MNetworkVarNames "float m_fSpeedVariation"
        // static metadata: MNetworkVarNames "float m_fTurbulence"
        // static metadata: MNetworkVarNames "float m_fVolumeHalfExtentXY"
        // static metadata: MNetworkVarNames "float m_fVolumeHalfExtentZ"
        // static metadata: MNetworkVarNames "int m_nVolumeResolutionXY"
        // static metadata: MNetworkVarNames "int m_nVolumeResolutionZ"
        // static metadata: MNetworkVarNames "int m_nClipmapLevels"
        // static metadata: MNetworkVarNames "bool m_bIsMaster"
        #pragma pack(push, 1)
        class C_EnvWindController : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::C_EnvWindShared m_EnvWindShared; // 0x5e8            
            // metadata: MNetworkEnable
            float m_fDirectionVariation; // 0x6e0            
            // metadata: MNetworkEnable
            float m_fSpeedVariation; // 0x6e4            
            // metadata: MNetworkEnable
            float m_fTurbulence; // 0x6e8            
            // metadata: MNetworkEnable
            float m_fVolumeHalfExtentXY; // 0x6ec            
            // metadata: MNetworkEnable
            float m_fVolumeHalfExtentZ; // 0x6f0            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeResolutionXY; // 0x6f4            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeResolutionZ; // 0x6f8            
            // metadata: MNetworkEnable
            std::int32_t m_nClipmapLevels; // 0x6fc            
            // metadata: MNetworkEnable
            bool m_bIsMaster; // 0x700            
            bool m_bFirstTime; // 0x701            
            uint8_t _pad0702[0x6];
            
            // Datamap fields:
            // void C_EnvWindControllerWindThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvWindController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvWindController) == 0x708);
    };
};

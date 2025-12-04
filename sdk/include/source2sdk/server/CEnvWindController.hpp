#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CEnvWindShared.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
        class CEnvWindController : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::CEnvWindShared m_EnvWindShared; // 0x_            
            // metadata: MNetworkEnable
            float m_fDirectionVariation; // 0x_            
            // metadata: MNetworkEnable
            float m_fSpeedVariation; // 0x_            
            // metadata: MNetworkEnable
            float m_fTurbulence; // 0x_            
            // metadata: MNetworkEnable
            float m_fVolumeHalfExtentXY; // 0x_            
            // metadata: MNetworkEnable
            float m_fVolumeHalfExtentZ; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeResolutionXY; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeResolutionZ; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nClipmapLevels; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsMaster; // 0x_            
            bool m_bFirstTime; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CEnvWindControllerWindThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvWindController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvWindController) == 0x_);
    };
};

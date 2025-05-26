#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x518
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "Vector m_vDirection"
        // static metadata: MNetworkVarNames "float m_fDirectionVariation"
        // static metadata: MNetworkVarNames "float m_fSpeed"
        // static metadata: MNetworkVarNames "float m_fSpeedVariation"
        // static metadata: MNetworkVarNames "float m_fTurbulence"
        // static metadata: MNetworkVarNames "float m_fVolumeSizeXY"
        // static metadata: MNetworkVarNames "float m_fVolumeSizeZ"
        // static metadata: MNetworkVarNames "float m_fVolumeMinSpacing"
        // static metadata: MNetworkVarNames "int m_nVolumeResolutionXY"
        // static metadata: MNetworkVarNames "int m_nVolumeResolutionZ"
        // static metadata: MNetworkVarNames "bool m_bIsMaster"
        #pragma pack(push, 1)
        class CEnvWindController : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vDirection; // 0x4e0            
            // metadata: MNetworkEnable
            float m_fDirectionVariation; // 0x4ec            
            // metadata: MNetworkEnable
            float m_fSpeed; // 0x4f0            
            // metadata: MNetworkEnable
            float m_fSpeedVariation; // 0x4f4            
            // metadata: MNetworkEnable
            float m_fTurbulence; // 0x4f8            
            // metadata: MNetworkEnable
            float m_fVolumeSizeXY; // 0x4fc            
            // metadata: MNetworkEnable
            float m_fVolumeSizeZ; // 0x500            
            // metadata: MNetworkEnable
            float m_fVolumeMinSpacing; // 0x504            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeResolutionXY; // 0x508            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeResolutionZ; // 0x50c            
            // metadata: MNetworkEnable
            bool m_bIsMaster; // 0x510            
            bool m_bFirstTime; // 0x511            
            uint8_t _pad0512[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvWindController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvWindController) == 0x518);
    };
};

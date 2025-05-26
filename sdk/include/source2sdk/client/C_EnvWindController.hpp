#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x618
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
        class C_EnvWindController : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vDirection; // 0x5e0            
            // metadata: MNetworkEnable
            float m_fDirectionVariation; // 0x5ec            
            // metadata: MNetworkEnable
            float m_fSpeed; // 0x5f0            
            // metadata: MNetworkEnable
            float m_fSpeedVariation; // 0x5f4            
            // metadata: MNetworkEnable
            float m_fTurbulence; // 0x5f8            
            // metadata: MNetworkEnable
            float m_fVolumeSizeXY; // 0x5fc            
            // metadata: MNetworkEnable
            float m_fVolumeSizeZ; // 0x600            
            // metadata: MNetworkEnable
            float m_fVolumeMinSpacing; // 0x604            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeResolutionXY; // 0x608            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeResolutionZ; // 0x60c            
            // metadata: MNetworkEnable
            bool m_bIsMaster; // 0x610            
            bool m_bFirstTime; // 0x611            
            uint8_t _pad0612[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvWindController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvWindController) == 0x618);
    };
};

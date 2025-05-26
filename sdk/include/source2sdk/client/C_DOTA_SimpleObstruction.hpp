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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bBlockFoW"
        // static metadata: MNetworkVarNames "bool m_bBlockNav"
        #pragma pack(push, 1)
        class C_DOTA_SimpleObstruction : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x5e0            
            // metadata: MNetworkEnable
            bool m_bBlockFoW; // 0x5e1            
            // metadata: MNetworkEnable
            bool m_bBlockNav; // 0x5e2            
            uint8_t _pad05e3[0x1]; // 0x5e3
            std::uint32_t m_unOccluderID; // 0x5e4            
            bool m_bBlockingGridNav; // 0x5e8            
            bool m_bPrevEnabled; // 0x5e9            
            uint8_t _pad05ea[0x6];
            
            // Datamap fields:
            // bool StartDisabled; // 0x7fffffff
            // bool block_fow; // 0x7fffffff
            // bool block_nav; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_SimpleObstruction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_SimpleObstruction) == 0x5f0);
    };
};

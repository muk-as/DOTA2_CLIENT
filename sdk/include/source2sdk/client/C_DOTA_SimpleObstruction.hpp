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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            bool m_bEnabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bBlockFoW; // 0x_            
            // metadata: MNetworkEnable
            bool m_bBlockNav; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_unOccluderID; // 0x_            
            bool m_bBlockingGridNav; // 0x_            
            bool m_bPrevEnabled; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // bool StartDisabled; // 0x_
            // bool block_fow; // 0x_
            // bool block_nav; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_SimpleObstruction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_SimpleObstruction) == 0x_);
    };
};

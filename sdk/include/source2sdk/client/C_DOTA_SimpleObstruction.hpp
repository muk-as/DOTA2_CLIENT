#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x548
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bBlockFoW"
    // static metadata: MNetworkVarNames "bool m_bBlockNav"
    #pragma pack(push, 1)
    class C_DOTA_SimpleObstruction : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x538        
        // metadata: MNetworkEnable
        bool m_bBlockFoW; // 0x539        
        // metadata: MNetworkEnable
        bool m_bBlockNav; // 0x53a        
        [[maybe_unused]] std::uint8_t pad_0x53b[0x1]; // 0x53b
        uint32_t m_unOccluderID; // 0x53c        
        bool m_bBlockingGridNav; // 0x540        
        bool m_bPrevEnabled; // 0x541        
        [[maybe_unused]] std::uint8_t pad_0x542[0x6];
        
        // Datamap fields:
        // bool StartDisabled; // 0x7fffffff
        // bool block_fow; // 0x7fffffff
        // bool block_nav; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_SimpleObstruction because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_SimpleObstruction) == 0x548);
};

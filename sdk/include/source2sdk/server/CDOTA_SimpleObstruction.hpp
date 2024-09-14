#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x4e0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bBlockFoW"
    // static metadata: MNetworkVarNames "bool m_bBlockNav"
    #pragma pack(push, 1)
    class CDOTA_SimpleObstruction : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x18]; // 0x4b8
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x4d0        
        // metadata: MNetworkEnable
        bool m_bBlockFoW; // 0x4d1        
        // metadata: MNetworkEnable
        bool m_bBlockNav; // 0x4d2        
        [[maybe_unused]] std::uint8_t pad_0x4d3[0x1]; // 0x4d3
        uint32_t m_unOccluderID; // 0x4d4        
        bool m_bBlockingGridNav; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4d9[0x7];
        
        // Datamap fields:
        // void InputToggle; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // bool StartDisabled; // 0x7fffffff
        // bool block_fow; // 0x7fffffff
        // bool block_nav; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_SimpleObstruction because it is not a standard-layout class
    static_assert(sizeof(CDOTA_SimpleObstruction) == 0x4e0);
};

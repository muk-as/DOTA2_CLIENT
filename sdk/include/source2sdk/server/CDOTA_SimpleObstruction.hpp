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
    // Size: 0x508
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bBlockFoW"
    // static metadata: MNetworkVarNames "bool m_bBlockNav"
    #pragma pack(push, 1)
    class CDOTA_SimpleObstruction : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x18]; // 0x4e0
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x4f8        
        // metadata: MNetworkEnable
        bool m_bBlockFoW; // 0x4f9        
        // metadata: MNetworkEnable
        bool m_bBlockNav; // 0x4fa        
        [[maybe_unused]] std::uint8_t pad_0x4fb[0x1]; // 0x4fb
        uint32_t m_unOccluderID; // 0x4fc        
        bool m_bBlockingGridNav; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x501[0x7];
        
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
    static_assert(sizeof(CDOTA_SimpleObstruction) == 0x508);
};

#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x7c0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CFuncNavBlocker : public server::CBaseModelEntity
    {
    public:
        bool m_bDisabled; // 0x7b0        
        [[maybe_unused]] std::uint8_t pad_0x7b1[0x3]; // 0x7b1
        int32_t m_nBlockedTeamNumber; // 0x7b4        
        [[maybe_unused]] std::uint8_t pad_0x7b8[0x8];
        
        // Datamap fields:
        // void InputBlockNav; // 0x0
        // void InputUnblockNav; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncNavBlocker because it is not a standard-layout class
    static_assert(sizeof(CFuncNavBlocker) == 0x7c0);
};

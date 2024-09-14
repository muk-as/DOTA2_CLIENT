#pragma once
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x4c8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CInfoPlayerStart : public server::CPointEntity
    {
    public:
        bool m_bDisabled; // 0x4b8        
        bool m_bIsMaster; // 0x4b9        
        [[maybe_unused]] std::uint8_t pad_0x4ba[0x6]; // 0x4ba
        CGlobalSymbol m_pPawnSubclass; // 0x4c0        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoPlayerStart because it is not a standard-layout class
    static_assert(sizeof(CInfoPlayerStart) == 0x4c8);
};

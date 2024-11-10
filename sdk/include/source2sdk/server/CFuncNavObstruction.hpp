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
    class CFuncNavObstruction : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7b0[0x8]; // 0x7b0
        bool m_bDisabled; // 0x7b8        
        [[maybe_unused]] std::uint8_t pad_0x7b9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncNavObstruction because it is not a standard-layout class
    static_assert(sizeof(CFuncNavObstruction) == 0x7c0);
};

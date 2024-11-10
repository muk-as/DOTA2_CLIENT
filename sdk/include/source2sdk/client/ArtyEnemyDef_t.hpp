#pragma once
#include "source2sdk/client/ArtyUnitDef_t.hpp"
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
    // Size: 0xc0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ArtyEnemyDef_t : public client::ArtyUnitDef_t
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(ArtyEnemyDef_t) == 0xc0);
};

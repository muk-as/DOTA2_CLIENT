#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Windrunner_EasyBreezy : public client::CDOTA_Buff
    {
    public:
        int32_t min_movespeed; // 0x1708        
        int32_t max_movespeed; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_EasyBreezy because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Windrunner_EasyBreezy) == 0x1710);
};

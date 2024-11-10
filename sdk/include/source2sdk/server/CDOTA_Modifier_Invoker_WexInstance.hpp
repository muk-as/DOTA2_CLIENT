#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invoker_Instance.hpp"
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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_WexInstance : public server::CDOTA_Modifier_Invoker_Instance
    {
    public:
        float move_speed_per_instance; // 0x1708        
        float cooldown_reduction; // 0x170c        
        char* m_pSlotName; // 0x1710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_WexInstance because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_WexInstance) == 0x1718);
};

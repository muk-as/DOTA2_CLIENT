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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_QuasInstance : public server::CDOTA_Modifier_Invoker_Instance
    {
    public:
        float spell_lifesteal; // 0x16e8        
        float lifesteal_per_instance; // 0x16ec        
        int32_t health_regen_per_instance; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4]; // 0x16f4
        char* m_pSlotName; // 0x16f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_QuasInstance because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_QuasInstance) == 0x1700);
};

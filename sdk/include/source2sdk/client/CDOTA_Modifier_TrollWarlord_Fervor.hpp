#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_TrollWarlord_Fervor : public client::CDOTA_Buff
    {
    public:
        int32_t max_stacks; // 0x1708        
        int32_t extra_attack_chance_per_stack; // 0x170c        
        int32_t base_chance; // 0x1710        
        // m_hUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hUnit;
        char m_hUnit[0x4]; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_TrollWarlord_Fervor because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_TrollWarlord_Fervor) == 0x1718);
};

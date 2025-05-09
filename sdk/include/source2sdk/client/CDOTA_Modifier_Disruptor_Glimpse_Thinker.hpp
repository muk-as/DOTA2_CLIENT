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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Disruptor_Glimpse_Thinker : public client::CDOTA_Buff
    {
    public:
        Vector m_vStartLoc; // 0x1708        
        // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEntity;
        char m_hEntity[0x4]; // 0x1714        
        float m_flDistance; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_Glimpse_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_Glimpse_Thinker) == 0x1728);
};

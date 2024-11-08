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
    class CDOTA_Modifier_Shadow_Demon_Disruption : public client::CDOTA_Buff
    {
    public:
        float m_flHealth; // 0x1708        
        float m_flDisseminate_Duration; // 0x170c        
        // m_hDisseminateAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hDisseminateAbility;
        char m_hDisseminateAbility[0x4]; // 0x1710        
        bool m_bCanCast; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shadow_Demon_Disruption because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shadow_Demon_Disruption) == 0x1718);
};

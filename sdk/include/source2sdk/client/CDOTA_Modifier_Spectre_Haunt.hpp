#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Spectre_Haunt : public client::CDOTA_Buff
    {
    public:
        int32_t destroy_if_target_is_dead; // 0x16e8        
        entity2::GameTime_t m_fStartAttackTime; // 0x16ec        
        // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hTarget;
        char hTarget[0x4]; // 0x16f0        
        bool m_bTargetIsAlive; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Spectre_Haunt because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Spectre_Haunt) == 0x16f8);
};

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
    class CDOTA_Modifier_VoidSpirit_AetherRemnantThinker : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x1708        
        Vector m_vFacingDir; // 0x170c        
        // m_hRemnant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hRemnant;
        char m_hRemnant[0x4]; // 0x1718        
        bool m_bTriggered; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        float m_flCurThink; // 0x1720        
        bool bIsArtifice; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnantThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_VoidSpirit_AetherRemnantThinker) == 0x1728);
};

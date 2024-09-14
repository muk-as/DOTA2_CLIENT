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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_VoidSpirit_AetherRemnantThinker : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x16e8        
        Vector m_vFacingDir; // 0x16ec        
        // m_hRemnant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hRemnant;
        char m_hRemnant[0x4]; // 0x16f8        
        bool m_bTriggered; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3]; // 0x16fd
        float m_flCurThink; // 0x1700        
        bool bIsArtifice; // 0x1704        
        [[maybe_unused]] std::uint8_t pad_0x1705[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnantThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_VoidSpirit_AetherRemnantThinker) == 0x1708);
};

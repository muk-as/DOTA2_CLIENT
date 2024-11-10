#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTA_Modifier_MuertaReleaseEvent_RemoveGravestone : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nParticleIndex; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4]; // 0x170c
        // m_pActiveGravestones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t>* m_pActiveGravestones;
        char m_pActiveGravestones[0x8]; // 0x1710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MuertaReleaseEvent_RemoveGravestone because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MuertaReleaseEvent_RemoveGravestone) == 0x1718);
};

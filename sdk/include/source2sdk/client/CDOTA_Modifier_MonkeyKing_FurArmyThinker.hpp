#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MonkeyKing_FurArmyThinker : public client::CDOTA_Buff
    {
    public:
        float m_fDuration; // 0x16e8        
        entity2::GameTime_t m_fTimeThinkerCreated; // 0x16ec        
        // m_vTargetPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vTargetPositions;
        char m_vTargetPositions[0x18]; // 0x16f0        
        Vector m_vInitialPos; // 0x1708        
        int32_t first_radius; // 0x1714        
        int32_t num_first_soldiers; // 0x1718        
        int32_t second_radius; // 0x171c        
        int32_t num_second_soldiers; // 0x1720        
        client::ParticleIndex_t m_nRingFXIndex; // 0x1724        
        int32_t final_radius; // 0x1728        
        float leadership_time_buffer; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_FurArmyThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_FurArmyThinker) == 0x1730);
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_TameTheBeasts : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPreviousMult; // 0x17f8            
            float m_fChannelTime; // 0x17fc            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1800            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1804            
            std::int32_t has_debuff_immunity; // 0x1808            
            std::int32_t magic_resist; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_TameTheBeasts because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ringmaster_TameTheBeasts) == 0x1810);
    };
};

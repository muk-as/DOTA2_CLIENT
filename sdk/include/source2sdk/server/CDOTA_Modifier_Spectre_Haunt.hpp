#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Spectre_Haunt : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bRealityApplied; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            std::int32_t destroy_if_target_is_dead; // 0x187c            
            source2sdk::entity2::GameTime_t m_fStartAttackTime; // 0x1880            
            // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hTarget;
            char hTarget[0x4]; // 0x1884            
            bool m_bTargetIsAlive; // 0x1888            
            uint8_t _pad1889[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Spectre_Haunt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Spectre_Haunt) == 0x1890);
    };
};

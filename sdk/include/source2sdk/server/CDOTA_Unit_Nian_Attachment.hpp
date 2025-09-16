#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/server/NianDamageTaken_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1900
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Nian_Attachment : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            bool m_bAttachmentBroken; // 0x18e0            
            uint8_t _pad18e1[0x3]; // 0x18e1
            source2sdk::client::ParticleIndex_t m_nfxIndex_tailgrow; // 0x18e4            
            // m_vecRecentDamage has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::NianDamageTaken_t> m_vecRecentDamage;
            char m_vecRecentDamage[0x18]; // 0x18e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Nian_Attachment because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Nian_Attachment) == 0x1900);
    };
};

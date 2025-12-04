#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shredder_Flamethrower_TreeFire_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_vecTreeFires has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std_pair<CHandle<source2sdk::client::C_BaseEntity>,source2sdk::entity2::GameTime_t>> m_vecTreeFires;
            char m_vecTreeFires[0x_]; // 0x_            
            bool m_bCleanupWhenEmpty; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_Flamethrower_TreeFire_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Shredder_Flamethrower_TreeFire_Thinker) == 0x_);
    };
};

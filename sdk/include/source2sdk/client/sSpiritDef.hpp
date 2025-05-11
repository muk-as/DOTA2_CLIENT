#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class sSpiritDef
        {
        public:
            source2sdk::client::C_DOTA_BaseNPC* pSpirit; // 0x0            
            source2sdk::client::ParticleIndex_t nSpiritFXIndex; // 0x8            
            std::int32_t nSpiritState; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sSpiritDef, pSpirit) == 0x0);
        static_assert(offsetof(source2sdk::client::sSpiritDef, nSpiritFXIndex) == 0x8);
        static_assert(offsetof(source2sdk::client::sSpiritDef, nSpiritState) == 0xc);
        
        static_assert(sizeof(source2sdk::client::sSpiritDef) == 0x10);
    };
};

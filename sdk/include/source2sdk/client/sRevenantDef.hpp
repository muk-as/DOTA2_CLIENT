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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class sRevenantDef
        {
        public:
            source2sdk::client::C_DOTA_BaseNPC* pRevenant; // 0x_            
            source2sdk::client::ParticleIndex_t nRevenantFXIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sRevenantDef, pRevenant) == 0x_);
        static_assert(offsetof(source2sdk::client::sRevenantDef, nRevenantFXIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::client::sRevenantDef) == 0x_);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct NianDamageTaken_t
        {
        public:
            std::int32_t nDamage; // 0x_            
            source2sdk::client::PlayerID_t nPlayerID; // 0x_            
            Vector vPos; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::NianDamageTaken_t, nDamage) == 0x_);
        static_assert(offsetof(source2sdk::server::NianDamageTaken_t, nPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::server::NianDamageTaken_t, vPos) == 0x_);
        
        static_assert(sizeof(source2sdk::server::NianDamageTaken_t) == 0x_);
    };
};

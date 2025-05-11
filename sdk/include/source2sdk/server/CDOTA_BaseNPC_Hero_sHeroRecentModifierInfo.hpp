#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo
        {
        public:
            source2sdk::client::PlayerID_t nSourcePlayerID; // 0x0            
            bool bBuff; // 0x4            
            uint8_t _pad0005[0x3]; // 0x5
            std::int32_t nAbilityIndex; // 0x8            
            source2sdk::entity2::GameTime_t fTime; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo, nSourcePlayerID) == 0x0);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo, bBuff) == 0x4);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo, nAbilityIndex) == 0x8);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo, fTime) == 0xc);
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo) == 0x10);
    };
};

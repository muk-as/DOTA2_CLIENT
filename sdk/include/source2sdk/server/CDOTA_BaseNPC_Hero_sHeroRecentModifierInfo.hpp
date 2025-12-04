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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo
        {
        public:
            source2sdk::client::PlayerID_t nSourcePlayerID; // 0x_            
            bool bBuff; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t nAbilityIndex; // 0x_            
            source2sdk::entity2::GameTime_t fTime; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo, nSourcePlayerID) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo, bBuff) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo, nAbilityIndex) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo, fTime) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo) == 0x_);
    };
};

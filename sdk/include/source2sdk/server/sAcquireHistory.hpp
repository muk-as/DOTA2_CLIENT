#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"

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
        #pragma pack(push, 1)
        class sAcquireHistory
        {
        public:
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x_            
            std::int32_t m_nLevel; // 0x_            
            std::int32_t m_nGold; // 0x_            
            std::int32_t m_nNetWorth; // 0x_            
            std::int32_t m_bCombinedItem; // 0x_            
            float m_fGameTime; // 0x_            
            // m_vecItemList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AbilityID_t> m_vecItemList;
            char m_vecItemList[0x_]; // 0x_            
            // m_vecTalentSkilledList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AbilityID_t> m_vecTalentSkilledList;
            char m_vecTalentSkilledList[0x_]; // 0x_            
            // m_vecAvailableNeutralItemList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AbilityID_t> m_vecAvailableNeutralItemList;
            char m_vecAvailableNeutralItemList[0x_]; // 0x_            
            bool m_bSold; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::sAcquireHistory, m_nAbilityID) == 0x_);
        static_assert(offsetof(source2sdk::server::sAcquireHistory, m_nLevel) == 0x_);
        static_assert(offsetof(source2sdk::server::sAcquireHistory, m_nGold) == 0x_);
        static_assert(offsetof(source2sdk::server::sAcquireHistory, m_nNetWorth) == 0x_);
        static_assert(offsetof(source2sdk::server::sAcquireHistory, m_bCombinedItem) == 0x_);
        static_assert(offsetof(source2sdk::server::sAcquireHistory, m_fGameTime) == 0x_);
        static_assert(offsetof(source2sdk::server::sAcquireHistory, m_vecItemList) == 0x_);
        static_assert(offsetof(source2sdk::server::sAcquireHistory, m_vecTalentSkilledList) == 0x_);
        static_assert(offsetof(source2sdk::server::sAcquireHistory, m_vecAvailableNeutralItemList) == 0x_);
        static_assert(offsetof(source2sdk::server::sAcquireHistory, m_bSold) == 0x_);
        
        static_assert(sizeof(source2sdk::server::sAcquireHistory) == 0x_);
    };
};

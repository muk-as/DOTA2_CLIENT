#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x60
    #pragma pack(push, 1)
    class sAcquireHistory
    {
    public:
        client::AbilityID_t m_nAbilityID; // 0x0        
        int32_t m_nLevel; // 0x4        
        int32_t m_nGold; // 0x8        
        int32_t m_nNetWorth; // 0xc        
        int32_t m_bCombinedItem; // 0x10        
        float m_fGameTime; // 0x14        
        // m_vecItemList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AbilityID_t> m_vecItemList;
        char m_vecItemList[0x18]; // 0x18        
        // m_vecTalentSkilledList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AbilityID_t> m_vecTalentSkilledList;
        char m_vecTalentSkilledList[0x18]; // 0x30        
        // m_vecAvailableNeutralItemList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AbilityID_t> m_vecAvailableNeutralItemList;
        char m_vecAvailableNeutralItemList[0x18]; // 0x48        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sAcquireHistory, m_nAbilityID) == 0x0);
    static_assert(offsetof(sAcquireHistory, m_nLevel) == 0x4);
    static_assert(offsetof(sAcquireHistory, m_nGold) == 0x8);
    static_assert(offsetof(sAcquireHistory, m_nNetWorth) == 0xc);
    static_assert(offsetof(sAcquireHistory, m_bCombinedItem) == 0x10);
    static_assert(offsetof(sAcquireHistory, m_fGameTime) == 0x14);
    static_assert(offsetof(sAcquireHistory, m_vecItemList) == 0x18);
    static_assert(offsetof(sAcquireHistory, m_vecTalentSkilledList) == 0x30);
    static_assert(offsetof(sAcquireHistory, m_vecAvailableNeutralItemList) == 0x48);
    
    static_assert(sizeof(sAcquireHistory) == 0x60);
};

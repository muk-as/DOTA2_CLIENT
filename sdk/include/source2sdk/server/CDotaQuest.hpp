#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDotaSubquestBase;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x938
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "char m_pszQuestTitle"
    // static metadata: MNetworkVarNames "char m_pszQuestText"
    // static metadata: MNetworkVarNames "int m_nQuestType"
    // static metadata: MNetworkVarNames "CHandle< CDotaSubquestBase > m_hSubquests"
    // static metadata: MNetworkVarNames "bool m_bHidden"
    // static metadata: MNetworkVarNames "bool m_bCompleted"
    // static metadata: MNetworkVarNames "bool m_bWinIfCompleted"
    // static metadata: MNetworkVarNames "bool m_bLoseIfCompleted"
    // static metadata: MNetworkVarNames "char m_pszGameEndText"
    // static metadata: MNetworkVarNames "int m_pnTextReplaceValuesCDotaQuest"
    // static metadata: MNetworkVarNames "char m_pszTextReplaceString"
    // static metadata: MNetworkVarNames "int m_nTextReplaceValueVersion"
    #pragma pack(push, 1)
    class CDotaQuest : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        char m_pszQuestTitle[256]; // 0x4b8        
        // metadata: MNetworkEnable
        char m_pszQuestText[256]; // 0x5b8        
        // metadata: MNetworkEnable
        int32_t m_nQuestType; // 0x6b8        
        // metadata: MNetworkEnable
        // m_hSubquests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDotaSubquestBase> m_hSubquests[8];
        char m_hSubquests[0x20]; // 0x6bc        
        // metadata: MNetworkEnable
        bool m_bHidden; // 0x6dc        
        // metadata: MNetworkEnable
        bool m_bCompleted; // 0x6dd        
        // metadata: MNetworkEnable
        bool m_bWinIfCompleted; // 0x6de        
        // metadata: MNetworkEnable
        bool m_bLoseIfCompleted; // 0x6df        
        // metadata: MNetworkEnable
        char m_pszGameEndText[256]; // 0x6e0        
        // metadata: MNetworkEnable
        int32_t m_pnTextReplaceValuesCDotaQuest[4]; // 0x7e0        
        // metadata: MNetworkEnable
        char m_pszTextReplaceString[64]; // 0x7f0        
        // metadata: MNetworkEnable
        int32_t m_nTextReplaceValueVersion; // 0x830        
        int32_t m_nQuestCompleteFadeAlpha; // 0x834        
        char m_pszQuestName[256]; // 0x838        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDotaQuest because it is not a standard-layout class
    static_assert(sizeof(CDotaQuest) == 0x938);
};

#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DotaSubquestBase;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8b8
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
    class C_DotaQuest : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        char m_pszQuestTitle[256]; // 0x538        
        // metadata: MNetworkEnable
        char m_pszQuestText[256]; // 0x638        
        // metadata: MNetworkEnable
        int32_t m_nQuestType; // 0x738        
        // metadata: MNetworkEnable
        // m_hSubquests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DotaSubquestBase> m_hSubquests[8];
        char m_hSubquests[0x20]; // 0x73c        
        // metadata: MNetworkEnable
        bool m_bHidden; // 0x75c        
        // metadata: MNetworkEnable
        bool m_bCompleted; // 0x75d        
        // metadata: MNetworkEnable
        bool m_bWinIfCompleted; // 0x75e        
        // metadata: MNetworkEnable
        bool m_bLoseIfCompleted; // 0x75f        
        // metadata: MNetworkEnable
        char m_pszGameEndText[256]; // 0x760        
        // metadata: MNetworkEnable
        int32_t m_pnTextReplaceValuesCDotaQuest[4]; // 0x860        
        // metadata: MNetworkEnable
        char m_pszTextReplaceString[64]; // 0x870        
        // metadata: MNetworkEnable
        int32_t m_nTextReplaceValueVersion; // 0x8b0        
        bool m_bWasCompleted; // 0x8b4        
        [[maybe_unused]] std::uint8_t pad_0x8b5[0x3];
        
        // Static fields:
        static char* &Get_s_pszTextReplaceStringName() {return *reinterpret_cast<char**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_DotaQuest")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DotaQuest because it is not a standard-layout class
    static_assert(sizeof(C_DotaQuest) == 0x8b8);
};

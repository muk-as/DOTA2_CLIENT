#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDotaSubquestBase;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
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
        class CDotaQuest : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            char m_pszQuestTitle[256]; // 0x_            
            // metadata: MNetworkEnable
            char m_pszQuestText[256]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nQuestType; // 0x_            
            // metadata: MNetworkEnable
            // m_hSubquests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDotaSubquestBase> m_hSubquests[8];
            char m_hSubquests[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHidden; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCompleted; // 0x_            
            // metadata: MNetworkEnable
            bool m_bWinIfCompleted; // 0x_            
            // metadata: MNetworkEnable
            bool m_bLoseIfCompleted; // 0x_            
            // metadata: MNetworkEnable
            char m_pszGameEndText[256]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_pnTextReplaceValuesCDotaQuest[4]; // 0x_            
            // metadata: MNetworkEnable
            char m_pszTextReplaceString[64]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nTextReplaceValueVersion; // 0x_            
            std::int32_t m_nQuestCompleteFadeAlpha; // 0x_            
            char m_pszQuestName[256]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaQuest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaQuest) == 0x_);
    };
};

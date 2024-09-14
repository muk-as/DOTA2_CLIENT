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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x690
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "char m_pszSubquestText"
    // static metadata: MNetworkVarNames "bool m_bHidden"
    // static metadata: MNetworkVarNames "bool m_bCompleted"
    // static metadata: MNetworkVarNames "bool m_bShowProgressBar"
    // static metadata: MNetworkVarNames "int m_nProgressBarHueShift"
    // static metadata: MNetworkVarNames "int m_pnTextReplaceValuesCDotaSubquestBase"
    // static metadata: MNetworkVarNames "char m_pszTextReplaceString"
    // static metadata: MNetworkVarNames "int m_nTextReplaceValueVersion"
    #pragma pack(push, 1)
    class C_DotaSubquestBase : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        char m_pszSubquestText[256]; // 0x538        
        // metadata: MNetworkEnable
        bool m_bHidden; // 0x638        
        // metadata: MNetworkEnable
        bool m_bCompleted; // 0x639        
        // metadata: MNetworkEnable
        bool m_bShowProgressBar; // 0x63a        
        [[maybe_unused]] std::uint8_t pad_0x63b[0x1]; // 0x63b
        // metadata: MNetworkEnable
        int32_t m_nProgressBarHueShift; // 0x63c        
        // metadata: MNetworkEnable
        int32_t m_pnTextReplaceValuesCDotaSubquestBase[2]; // 0x640        
        // metadata: MNetworkEnable
        char m_pszTextReplaceString[64]; // 0x648        
        // metadata: MNetworkEnable
        int32_t m_nTextReplaceValueVersion; // 0x688        
        bool m_bWasCompleted; // 0x68c        
        [[maybe_unused]] std::uint8_t pad_0x68d[0x3];
        
        // Static fields:
        static char* &Get_s_pszTextReplaceStringName() {return *reinterpret_cast<char**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_DotaSubquestBase")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DotaSubquestBase because it is not a standard-layout class
    static_assert(sizeof(C_DotaSubquestBase) == 0x690);
};

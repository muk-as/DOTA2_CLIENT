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
    // Size: 0x6b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
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
        char m_pszSubquestText[256]; // 0x560        
        // metadata: MNetworkEnable
        bool m_bHidden; // 0x660        
        // metadata: MNetworkEnable
        bool m_bCompleted; // 0x661        
        // metadata: MNetworkEnable
        bool m_bShowProgressBar; // 0x662        
        [[maybe_unused]] std::uint8_t pad_0x663[0x1]; // 0x663
        // metadata: MNetworkEnable
        int32_t m_nProgressBarHueShift; // 0x664        
        // metadata: MNetworkEnable
        int32_t m_pnTextReplaceValuesCDotaSubquestBase[2]; // 0x668        
        // metadata: MNetworkEnable
        char m_pszTextReplaceString[64]; // 0x670        
        // metadata: MNetworkEnable
        int32_t m_nTextReplaceValueVersion; // 0x6b0        
        bool m_bWasCompleted; // 0x6b4        
        [[maybe_unused]] std::uint8_t pad_0x6b5[0x3];
        
        // Static fields:
        static char* &Get_s_pszTextReplaceStringName() {return *reinterpret_cast<char**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_DotaSubquestBase")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DotaSubquestBase because it is not a standard-layout class
    static_assert(sizeof(C_DotaSubquestBase) == 0x6b8);
};

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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x710
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
    class CDotaSubquestBase : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        char m_pszSubquestText[256]; // 0x4b8        
        // metadata: MNetworkEnable
        bool m_bHidden; // 0x5b8        
        // metadata: MNetworkEnable
        bool m_bCompleted; // 0x5b9        
        // metadata: MNetworkEnable
        bool m_bShowProgressBar; // 0x5ba        
        [[maybe_unused]] std::uint8_t pad_0x5bb[0x1]; // 0x5bb
        // metadata: MNetworkEnable
        int32_t m_nProgressBarHueShift; // 0x5bc        
        // metadata: MNetworkEnable
        int32_t m_pnTextReplaceValuesCDotaSubquestBase[2]; // 0x5c0        
        // metadata: MNetworkEnable
        char m_pszTextReplaceString[64]; // 0x5c8        
        // metadata: MNetworkEnable
        int32_t m_nTextReplaceValueVersion; // 0x608        
        char m_pszSubquestName[256]; // 0x60c        
        [[maybe_unused]] std::uint8_t pad_0x70c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDotaSubquestBase because it is not a standard-layout class
    static_assert(sizeof(CDotaSubquestBase) == 0x710);
};

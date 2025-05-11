#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x710
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkVarNames "float32 m_flFadeInDuration"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutDuration"
        // static metadata: MNetworkVarNames "float32 m_flMaxWeight"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bMaster"
        // static metadata: MNetworkVarNames "bool m_bClientSide"
        // static metadata: MNetworkVarNames "bool m_bExclusive"
        // static metadata: MNetworkVarNames "float32 m_MinFalloff"
        // static metadata: MNetworkVarNames "float32 m_MaxFalloff"
        // static metadata: MNetworkVarNames "float32 m_flCurWeight"
        // static metadata: MNetworkVarNames "char m_netlookupFilename"
        #pragma pack(push, 1)
        class CColorCorrection : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flFadeInDuration; // 0x4d8            
            // metadata: MNetworkEnable
            float m_flFadeOutDuration; // 0x4dc            
            float m_flStartFadeInWeight; // 0x4e0            
            float m_flStartFadeOutWeight; // 0x4e4            
            source2sdk::entity2::GameTime_t m_flTimeStartFadeIn; // 0x4e8            
            source2sdk::entity2::GameTime_t m_flTimeStartFadeOut; // 0x4ec            
            // metadata: MNetworkEnable
            float m_flMaxWeight; // 0x4f0            
            bool m_bStartDisabled; // 0x4f4            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x4f5            
            // metadata: MNetworkEnable
            bool m_bMaster; // 0x4f6            
            // metadata: MNetworkEnable
            bool m_bClientSide; // 0x4f7            
            // metadata: MNetworkEnable
            bool m_bExclusive; // 0x4f8            
            uint8_t _pad04f9[0x3]; // 0x4f9
            // metadata: MNetworkEnable
            float m_MinFalloff; // 0x4fc            
            // metadata: MNetworkEnable
            float m_MaxFalloff; // 0x500            
            // metadata: MNetworkEnable
            float m_flCurWeight; // 0x504            
            // metadata: MNetworkEnable
            char m_netlookupFilename[512]; // 0x508            
            CUtlSymbolLarge m_lookupFilename; // 0x708            
            
            // Datamap fields:
            // void CColorCorrectionFadeInThink; // 0x0
            // void CColorCorrectionFadeOutThink; // 0x0
            // void m_netlookupFilename; // 0x508
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // float InputSetFadeInDuration; // 0x0
            // float InputSetFadeOutDuration; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CColorCorrection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CColorCorrection) == 0x710);
    };
};

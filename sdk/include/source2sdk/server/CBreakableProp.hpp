#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseProp.hpp"
#include "source2sdk/server/CPropDataComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x960
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
        #pragma pack(push, 1)
        class CBreakableProp : public source2sdk::server::CBaseProp
        {
        public:
            uint8_t _pad07f8[0x8]; // 0x7f8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPropDataComponent"
            // metadata: MNetworkAlias "CPropDataComponent"
            // metadata: MNetworkTypeAlias "CPropDataComponent"
            source2sdk::server::CPropDataComponent m_CPropDataComponent; // 0x800            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x840            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x28]; // 0x868            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0x890            
            float m_impactEnergyScale; // 0x8b8            
            std::int32_t m_iMinHealthDmg; // 0x8bc            
            QAngle m_preferredCarryAngles; // 0x8c0            
            float m_flPressureDelay; // 0x8cc            
            float m_flDefBurstScale; // 0x8d0            
            Vector m_vDefBurstOffset; // 0x8d4            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0x8e0            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0x8e4            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0x8e8            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0x8ec            
            CUtlString m_strBreakableContentsPropGroupOverride; // 0x8f0            
            CUtlString m_strBreakableContentsParticleOverride; // 0x8f8            
            bool m_bHasBreakPiecesOrCommands; // 0x900            
            uint8_t _pad0901[0x3]; // 0x901
            float m_explodeDamage; // 0x904            
            float m_explodeRadius; // 0x908            
            uint8_t _pad090c[0x4]; // 0x90c
            float m_explosionDelay; // 0x910            
            uint8_t _pad0914[0x4]; // 0x914
            CUtlSymbolLarge m_explosionBuildupSound; // 0x918            
            CUtlSymbolLarge m_explosionCustomEffect; // 0x920            
            CUtlSymbolLarge m_explosionCustomSound; // 0x928            
            CUtlSymbolLarge m_explosionModifier; // 0x930            
            std::int32_t m_explosionDangerSound; // 0x938            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0x93c            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x940            
            bool m_bOriginalBlockLOS; // 0x944            
            uint8_t _pad0945[0x3]; // 0x945
            float m_flDefaultFadeScale; // 0x948            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0x94c            
            bool m_bUsePuntSound; // 0x950            
            uint8_t _pad0951[0x7]; // 0x951
            CUtlSymbolLarge m_iszPuntSound; // 0x958            
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // bool InputSetNavIgnore; // 0x0
            // void InputEnablePuntSound; // 0x0
            // void InputDisablePuntSound; // 0x0
            // void CBreakablePropBreakThink; // 0x0
            // void CBreakablePropRampToDefaultFadeScale; // 0x0
            // uint32_t m_nExplosionType; // 0x90c
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBreakableProp) == 0x960);
    };
};

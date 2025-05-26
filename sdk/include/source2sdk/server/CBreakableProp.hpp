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
        // Size: 0x9a8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
        #pragma pack(push, 1)
        class CBreakableProp : public source2sdk::server::CBaseProp
        {
        public:
            uint8_t _pad0818[0x8]; // 0x818
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPropDataComponent"
            // metadata: MNetworkAlias "CPropDataComponent"
            // metadata: MNetworkTypeAlias "CPropDataComponent"
            source2sdk::server::CPropDataComponent m_CPropDataComponent; // 0x820            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0x860            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x888            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x28]; // 0x8b0            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0x8d8            
            float m_impactEnergyScale; // 0x900            
            std::int32_t m_iMinHealthDmg; // 0x904            
            QAngle m_preferredCarryAngles; // 0x908            
            float m_flPressureDelay; // 0x914            
            float m_flDefBurstScale; // 0x918            
            Vector m_vDefBurstOffset; // 0x91c            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0x928            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0x92c            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0x930            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0x934            
            CUtlString m_strBreakableContentsPropGroupOverride; // 0x938            
            CUtlString m_strBreakableContentsParticleOverride; // 0x940            
            bool m_bHasBreakPiecesOrCommands; // 0x948            
            uint8_t _pad0949[0x3]; // 0x949
            float m_explodeDamage; // 0x94c            
            float m_explodeRadius; // 0x950            
            uint8_t _pad0954[0x4]; // 0x954
            float m_explosionDelay; // 0x958            
            uint8_t _pad095c[0x4]; // 0x95c
            CUtlSymbolLarge m_explosionBuildupSound; // 0x960            
            CUtlSymbolLarge m_explosionCustomEffect; // 0x968            
            CUtlSymbolLarge m_explosionCustomSound; // 0x970            
            CUtlSymbolLarge m_explosionModifier; // 0x978            
            std::int32_t m_explosionDangerSound; // 0x980            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0x984            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x988            
            float m_flDefaultFadeScale; // 0x98c            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0x990            
            uint8_t _pad0994[0x4]; // 0x994
            CUtlSymbolLarge m_iszPuntSound; // 0x998            
            bool m_bUsePuntSound; // 0x9a0            
            bool m_bOriginalBlockLOS; // 0x9a1            
            uint8_t _pad09a2[0x6];
            
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
            // uint32_t m_nExplosionType; // 0x954
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBreakableProp) == 0x9a8);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "float m_flParticleSpacing"
        // static metadata: MNetworkVarNames "float m_flSlack"
        // static metadata: MNetworkVarNames "float m_flRadius"
        // static metadata: MNetworkVarNames "Color m_ColorTint"
        // static metadata: MNetworkVarNames "int m_nEffectState"
        // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
        // static metadata: MNetworkVarNames "Vector m_PathNodes_Position"
        // static metadata: MNetworkVarNames "Vector m_PathNodes_TangentIn"
        // static metadata: MNetworkVarNames "Vector m_PathNodes_TangentOut"
        // static metadata: MNetworkVarNames "Vector m_PathNodes_Color"
        // static metadata: MNetworkVarNames "bool m_PathNodes_PinEnabled"
        // static metadata: MNetworkVarNames "float m_PathNodes_RadiusScale"
        #pragma pack(push, 1)
        class CPathParticleRope : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04d8[0x8]; // 0x4d8
            bool m_bStartActive; // 0x4e0            
            uint8_t _pad04e1[0x3]; // 0x4e1
            float m_flMaxSimulationTime; // 0x4e4            
            CUtlSymbolLarge m_iszEffectName; // 0x4e8            
            // m_PathNodes_Name has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_PathNodes_Name;
            char m_PathNodes_Name[0x18]; // 0x4f0            
            // metadata: MNetworkEnable
            float m_flParticleSpacing; // 0x508            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "parametersChanged"
            float m_flSlack; // 0x50c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "parametersChanged"
            float m_flRadius; // 0x510            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "parametersChanged"
            Color m_ColorTint; // 0x514            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "effectStateChanged"
            std::int32_t m_nEffectState; // 0x518            
            uint8_t _pad051c[0x4]; // 0x51c
            // metadata: MNetworkEnable
            // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
            char m_iEffectIndex[0x8]; // 0x520            
            // metadata: MNetworkEnable
            // m_PathNodes_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_PathNodes_Position;
            char m_PathNodes_Position[0x18]; // 0x528            
            // metadata: MNetworkEnable
            // m_PathNodes_TangentIn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_PathNodes_TangentIn;
            char m_PathNodes_TangentIn[0x18]; // 0x540            
            // metadata: MNetworkEnable
            // m_PathNodes_TangentOut has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_PathNodes_TangentOut;
            char m_PathNodes_TangentOut[0x18]; // 0x558            
            // metadata: MNetworkEnable
            // m_PathNodes_Color has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_PathNodes_Color;
            char m_PathNodes_Color[0x18]; // 0x570            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "pinStateChanged"
            // m_PathNodes_PinEnabled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<bool> m_PathNodes_PinEnabled;
            char m_PathNodes_PinEnabled[0x18]; // 0x588            
            // metadata: MNetworkEnable
            // m_PathNodes_RadiusScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<float> m_PathNodes_RadiusScale;
            char m_PathNodes_RadiusScale[0x18]; // 0x5a0            
            uint8_t _pad05b8[0x8];
            
            // Datamap fields:
            // CUtlSymbolLarge pathNodes; // 0x7fffffff
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputStopEndCap; // 0x0
            // void InputDestroy; // 0x0
            // CUtlSymbolLarge InputDisablePin; // 0x0
            // float InputSetRadius; // 0x0
            // float InputSetSlack; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathParticleRope because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathParticleRope) == 0x5c0);
    };
};

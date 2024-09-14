#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x598
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
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
    class CPathParticleRope : public server::CBaseEntity
    {
    public:
        bool m_bStartActive; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4b9[0x3]; // 0x4b9
        float m_flMaxSimulationTime; // 0x4bc        
        CUtlSymbolLarge m_iszEffectName; // 0x4c0        
        // m_PathNodes_Name has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbolLarge> m_PathNodes_Name;
        char m_PathNodes_Name[0x18]; // 0x4c8        
        // metadata: MNetworkEnable
        float m_flParticleSpacing; // 0x4e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "parametersChanged"
        float m_flSlack; // 0x4e4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "parametersChanged"
        float m_flRadius; // 0x4e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "parametersChanged"
        Color m_ColorTint; // 0x4ec        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "effectStateChanged"
        int32_t m_nEffectState; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x4f4[0x4]; // 0x4f4
        // metadata: MNetworkEnable
        // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
        char m_iEffectIndex[0x8]; // 0x4f8        
        // metadata: MNetworkEnable
        // m_PathNodes_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<Vector> m_PathNodes_Position;
        char m_PathNodes_Position[0x18]; // 0x500        
        // metadata: MNetworkEnable
        // m_PathNodes_TangentIn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<Vector> m_PathNodes_TangentIn;
        char m_PathNodes_TangentIn[0x18]; // 0x518        
        // metadata: MNetworkEnable
        // m_PathNodes_TangentOut has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<Vector> m_PathNodes_TangentOut;
        char m_PathNodes_TangentOut[0x18]; // 0x530        
        // metadata: MNetworkEnable
        // m_PathNodes_Color has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<Vector> m_PathNodes_Color;
        char m_PathNodes_Color[0x18]; // 0x548        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "pinStateChanged"
        // m_PathNodes_PinEnabled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<bool> m_PathNodes_PinEnabled;
        char m_PathNodes_PinEnabled[0x18]; // 0x560        
        // metadata: MNetworkEnable
        // m_PathNodes_RadiusScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<float> m_PathNodes_RadiusScale;
        char m_PathNodes_RadiusScale[0x18]; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x590[0x8];
        
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
    static_assert(sizeof(CPathParticleRope) == 0x598);
};
